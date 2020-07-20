#include "ClevelandZ.h"



ClevelandZ::ClevelandZ()
{
	m_type = ShapeType::EClevelandZ;
	m_shapeTiles.m00 = 0;	m_shapeTiles.m01 = 0; m_shapeTiles.m02 = 0; m_shapeTiles.m03 = 0;
	m_shapeTiles.m10 = 1;	m_shapeTiles.m11 = 1; m_shapeTiles.m12 = 0; m_shapeTiles.m13 = 0;
	m_shapeTiles.m20 = 0;	m_shapeTiles.m21 = 1; m_shapeTiles.m22 = 1; m_shapeTiles.m23 = 0;
	m_shapeTiles.m30 = 0;	m_shapeTiles.m31 = 0; m_shapeTiles.m32 = 0; m_shapeTiles.m33 = 0;
}


ClevelandZ::~ClevelandZ()
{
}


void ClevelandZ::Show()
{
	std::cout << m_shapeTiles.m00 << ", " << m_shapeTiles.m01 << ", " << m_shapeTiles.m02 << ", " << m_shapeTiles.m03 << std::endl;
	std::cout << m_shapeTiles.m10 << ", " << m_shapeTiles.m11 << ", " << m_shapeTiles.m12 << ", " << m_shapeTiles.m13 << std::endl;
	std::cout << m_shapeTiles.m20 << ", " << m_shapeTiles.m21 << ", " << m_shapeTiles.m22 << ", " << m_shapeTiles.m23 << std::endl;
	std::cout << m_shapeTiles.m30 << ", " << m_shapeTiles.m31 << ", " << m_shapeTiles.m32 << ", " << m_shapeTiles.m33 << std::endl;
}
