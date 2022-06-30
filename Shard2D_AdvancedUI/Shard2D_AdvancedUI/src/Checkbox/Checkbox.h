#pragma once

#include <ShardEntities.h>
#include <ShardEvents.h>

namespace Shard2D
{
	class Checkbox : public Entity
	{
	public:

		Checkbox(SDL_Color checkColor = SDL_Color(0,0,210));
		~Checkbox();

	public:

		SDL_Color checkColor;

		void SetEnabled(bool enabled = true);
		bool IsEnabled();

		void SetChecked(bool checked = true);
		bool IsChecked();

	private:

		Image* _baseCheckboxImage;
		Image* _checkboxImage;

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

