#pragma once

#include <ShardEntities.h>
#include <ShardEvents.h>

namespace Shard2D
{
	class Checkbox : public Entity
	{
	public:

		Checkbox(SDL_Color checkColor = SDL_Color(64,255,255));
		~Checkbox();

	public:

		SDL_Color checkColor;

		/*
		Set the Checkbox enabled or disabled, allowing or denying the user inputs
		*/
		void SetEnabled(bool enabled = true);
		/*
		Returns true if the Checkbox is enabled, returns false if the Checkbox is disabled
		*/
		bool IsEnabled();

		/*
		Set the checked or unchecked, activating or deactivating the checked boolean. This function bypass the enable control
		*/
		void SetChecked(bool checked = true);
		/*
		Returns if the Checkbox is checked or not
		*/
		bool IsChecked();

		/*
		Create the TextField for the Checkbox
		*/
		void CreateTextField(const std::string& fontPath);
		/*
		Returns the Checkbox's TextField
		*/
		TextField* GetTextField();
		/*
		Get the color of the entitiy (the alpha of the color is ignored)
		*/
		SDL_Color GetColor() override;

	private:

		Image* _baseCheckboxImage;
		Image* _checkboxImage;
		TextField* _textField;

		bool _enabled = true;
		bool _checked = false;

		void CheckboxPressed(MouseEvent* _event);

	protected:
		/*
		Function called from the GraphicManager. Return the image to render
		*/
		virtual Image* GetRenderingImage() override;
	};
}

