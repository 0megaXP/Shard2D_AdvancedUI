#include "Checkbox.h"

#include <ShardUtils.h>

namespace Shard2D
{
	Checkbox::Checkbox(SDL_Color newCheckColor)
		: checkColor(newCheckColor), 
		_baseCheckboxImage(ShardAssets->GetImageFromPNG("Assets/AdvancedUI/Checkbox/CheckBoxEmpty.png")),
		_checkboxImage(ShardAssets->GetImageFromPNG("Assets/AdvancedUI/Checkbox/CheckBoxSelected.png"))	
	{
		AddEventListener<MouseEvent, Checkbox>(MouseEvent::LeftButtonPressed, &Checkbox::CheckboxPressed, this);
	}

	Checkbox::~Checkbox() 
	{
		if (_baseCheckboxImage != nullptr)
			delete(_baseCheckboxImage);

		if (_checkboxImage != nullptr)
			delete(_checkboxImage);
	}

	void Checkbox::SetEnabled(bool enabled)
	{
		_enabled = enabled;
	}

	bool Checkbox::IsEnabled()
	{
		return _enabled;
	}

	void Checkbox::SetChecked(bool checked)
	{
		_checked = checked;
	}

	bool Checkbox::IsChecked()
	{
		return _checked;
	}

	void Checkbox::CreateTextField(const std::string& fontPath)
	{
		_textField = new TextField("Checkbox TextField", fontPath, 24);
		if (_textField == nullptr)
		{
			Log("Error creating _textField: font not found!", TextColor::Red);
			return;
		}

		AddChild(_textField);
		_textField->x = 25;
		_textField->y = -_textField->height / 2 + _baseCheckboxImage->GetHeight() / 2;	// Allign the text's y with the checkbox's y
	}

	TextField* Checkbox::GetTextField()
	{
		return _textField;
	}

	SDL_Color Checkbox::GetColor()
	{
		return !IsChecked() ? Entity::GetColor() : checkColor;
	}

	void Checkbox::CheckboxPressed(MouseEvent* event)
	{
		if (IsEnabled())
		{
			SetChecked(!IsChecked());
		}
	}

	Image* Checkbox::GetRenderingImage()
	{
		return IsChecked() ? _checkboxImage : _baseCheckboxImage;
	}
}
