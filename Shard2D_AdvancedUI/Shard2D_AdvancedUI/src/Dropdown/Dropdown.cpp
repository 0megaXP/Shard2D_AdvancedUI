#include "Dropdown.h"

namespace Shard2D
{
	Dropdown::Dropdown(SDL_Color buttonColor, int horizontalSpacing) :
		_horizontalSpacing(horizontalSpacing),
		_dropdownButton(new Sprite(ShardAssets->GetImageFromPNG("Assets/AdvancedUI/Dropdown/DropdownButton.png"))),
		_dropdownArrow(new Sprite(ShardAssets->GetImageFromPNG("Assets/AdvancedUI/Dropdown/DropdownArrow.png")))
	{
		_dropdownButton->SetColor(buttonColor);
		AddChild(_dropdownButton);
		AddChild(_dropdownArrow);

		_dropdownArrow->y = _dropdownButton->height / 2 - _dropdownArrow->height / 2;	// Allign the arrow's y with the button's y

		_dropdownArrow->x = horizontalSpacing;

		_dropdownButton->width = horizontalSpacing * 2 + _dropdownArrow->width; // 2 externals plus arrow's width
	}

	Dropdown::~Dropdown()
	{

	}

	void Dropdown::SetHorizontalSpacing(int horizontalSpacing)
	{
	}

	int Dropdown::GetHorizontalSpacing()
	{
		return 0;
	}

	void Dropdown::CreateTextField(const std::string& fontPath, const std::string& text)
	{
		_dropdownMainText = new TextField(text, fontPath, 24);
		if (_dropdownMainText == nullptr)
		{
			Log("Error creating _textField: font not found!", TextColor::Red);
			return;
		}

		AddChild(_dropdownMainText);
		_dropdownMainText->x = _horizontalSpacing;
		_dropdownMainText->y = _dropdownButton->height / 2 - _dropdownMainText->height / 2;	// Allign the text's y with the checkbox's y

		_dropdownArrow->x = _horizontalSpacing * 2 + _dropdownMainText->width;
		_dropdownButton->width = _horizontalSpacing * 3 + _dropdownArrow->width + _dropdownMainText->width;
	}
}