#pragma once
#include "�Message.h"
class I�ryptographer
{
public:
	I�ryptographer() = default;
	virtual ~I�ryptographer() {};
protected:
	virtual void EncipherCaesar() = 0;
	virtual void EncipherGamma() = 0;
	�Message m_message;
};

