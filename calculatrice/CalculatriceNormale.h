#pragma once

class CalculatriceNormale {
protected :
	float m_result;
public:
	CalculatriceNormale() : m_result(0) {
		
	}

	float add(float f1, float f2) {
		m_result = f1 + f2;
		return m_result;
	}

	float sub(float f1, float f2) {
		m_result = f1 - f2;
		return m_result;
	}

	float mult(float f1, float f2) {
		m_result = f1 * f2;
		return m_result;
	}

	float div(float f1, float f2) {
		m_result = f1 / f2;
		return m_result;
	}

	void reset() {
		m_result = 0;
	}
	
};