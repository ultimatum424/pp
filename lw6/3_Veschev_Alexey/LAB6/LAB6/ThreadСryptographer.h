#pragma once
#include "Alphabet.h"
#include "—Message.h"
#include "Line—ryptographer.h"

class CThread—ryptographer : public ICryptographer
{
public:
	CThread—ryptographer(std::vector<char> & message, CAlphabet alphabet);
	void DivisionMessage(size_t threadNumber, int key);
	void DivisionMessage(size_t threadNumber, const std::string & gamma);
	void EncipherCaesar(const int key) override;
	void EncipherGamma(const std::string & gamma) override;
	std::vector<char> GetCharMessage() const override;
	~CThread—ryptographer();
private:
	size_t m_countThreads;
	std::vector<int> m_threads;
	—Message m_message;
};

