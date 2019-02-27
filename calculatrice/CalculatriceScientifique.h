#pragma once

#include "CalculatriceNormale.h"
#include <cassert>

class CalculatriceScientifique : public CalculatriceNormale{
public:
	CalculatriceScientifique() {

	}

	float exponentielle(float f) {
		m_result = exp(f);
		return m_result;
	}

	float racine(float f) {
		assert(f >= 0);
		m_result = sqrt(f);
		return m_result;
	}

	float puissance(float f, float p) {
		m_result = pow(f, p);
		return m_result;
	}
};