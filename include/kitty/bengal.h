#pragma once

class Bengal
{
public:
	template<class COLOR>
	Bengal(const COLOR& color)
		: m_colorName(color.ToString())
		, m_colorRGB(color.ToRGB())
	{
	}

private:

	const char* const m_colorName;
	int m_colorRGB;
};
