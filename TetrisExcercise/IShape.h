#pragma once
#include "Vector2.h"
#include "Matrix4x4.h"

enum ShapeType
{
	EOrangeRicky,
	EBlueRicky,
	EClevelandZ,
	ERhodeIslandZ,
	EHero,
	ETeewee,
	ESmashBoy
};

class IShape
{
public:
	IShape() {};
	~IShape() {};
	Matrix4x4 GetShape() { return m_shapeTiles; };
	ShapeType GetShapeType() { return m_type; };
	void Rotate() { m_shapeTiles.Rotate(); }

protected:
	Vector2 m_position;
	Vector2 m_lastPosition;
	Matrix4x4 m_shapeTiles;
	ShapeType m_type;
};

