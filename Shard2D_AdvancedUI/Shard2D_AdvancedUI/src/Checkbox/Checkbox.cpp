#include "Checkbox.h"

#include <ShardUtils.h>

namespace Shard2D
{
	Checkbox::Checkbox(SDL_Color newCheckColor)
		: checkColor(newCheckColor), 
		_baseCheckboxImage(M_AssetsManager->GetImageFromPNG("Assets/AdvancedUI/Checkbox/CheckBoxEmpty.png")),
		_checkboxImage(M_AssetsManager->GetImageFromPNG("Assets/AdvancedUI/Checkbox/CheckBoxSelected.png"))	
	{
		AddEventListener<MouseEvent, Checkbox>(MouseEvent::LeftButtonPressed, &Checkbox::CheckboxPressed, this);
	}

	Checkbox::~Checkbox() {}

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
