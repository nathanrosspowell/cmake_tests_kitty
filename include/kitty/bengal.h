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

	const char* GetName() const;
	const char* GetColorName() const;
	int GetColorRGB() const;

private:

	const char* const m_colorName;
	int m_colorRGB;
};
