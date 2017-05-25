#pragma once
#include "—Message.h"
#include "ICryptographer.h"

class CLine—ryptographer : public ICryptographer
{
public:
	CLine—ryptographer(std::vector<char> & message, CAlphabet alphabet);
	~CLine—ryptographer();

	void EncipherCaesar(const int key) override;
	void EncipherGamma(const std::string & gamma) override;
	std::vector<char> GetCharMessage() const override;
private:
	—Message m_message;
};

