#include "OrangeRicky.h"



OrangeRicky::OrangeRicky()
{
	m_type = ShapeType::EOrangeRicky;
	m_shapeTiles.m00 = 0;	m_shapeTiles.m01 = 0; m_shapeTiles.m02 = 0; m_shapeTiles.m03 = 0;
	m_shapeTiles.m10 = 0;	m_shapeTiles.m11 = 0; m_shapeTiles.m12 = 0; m_shapeTiles.m13 = 1;
	m_shapeTiles.m20 = 0;	m_shapeTiles.m21 = 1; m_shapeTiles.m22 = 1; m_shapeTiles.m23 = 1;
	m_shapeTiles.m30 = 0;	m_shapeTiles.m31 = 0; m_shapeTiles.m32 = 0; m_shapeTiles.m33 = 0;
}


OrangeRicky::~OrangeRicky()
{
}
