#include "kitty/bengal.h"

const char* Bengal::GetName() const
{
	return m_colorName;
}

const char* Bengal::GetColorName() const
{
	return "Bengal";
}

int Bengal::GetColorRGB() const
{
	return m_colorRGB;
}
