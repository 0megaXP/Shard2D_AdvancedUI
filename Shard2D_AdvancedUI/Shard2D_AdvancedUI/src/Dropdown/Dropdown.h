#pragma once

#include <ShardEntities.h>

namespace Shard2D
{
	class Dropdown : public Shard2D::Entity
	{
	public:

		Dropdown(SDL_Color buttonColor = SDL_Color(128, 128, 128), int horizontalSpacing = 15);
		~Dropdown();

	public:

		void SetHorizontalSpacing(int horizontalSpacing);

		int GetHorizontalSpacing();

		void CreateTextField(const std::string& fontPath, const std::string& text = "Dropdown");

	private:

		Sprite* _dropdownButton;
		Sprite* _dropdownArrow;
		TextField* _dropdownMainText;

		int _horizontalSpacing;

		void SetComponentsPositions();
	};
}

