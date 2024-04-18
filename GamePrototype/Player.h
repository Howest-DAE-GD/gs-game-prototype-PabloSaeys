#pragma once
class Player
{
public:
	Player(const Point2f& Position);
	void Draw();
private:

	Point2f m_Position{};
	Rectf Hitbox{};
};

