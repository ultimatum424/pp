#include "stdafx.h"
#include "�Message.h"
#include "Alphabet.h"


�Message::�Message(std::vector<char> message, CAlphabet & alphabet)
{
	m_message = message;
	ptr_alphabet = std::make_unique<CAlphabet>(alphabet);
}

std::vector<char> �Message::GetMessage() const
{
	return m_message;
}

�Message::~�Message()
{
}


void �Message::CondingForCaesar(std::pair<size_t, size_t> const & range, CAlphabet & alphabet, int key)
{
	size_t sizeAlphabet = alphabet.GetSize();
	for (auto i = range.first; i < range.second; i++)
	{
		int codeSymbol = alphabet.GetCodeForSymbol(m_message[i]);
		codeSymbol  = (key + codeSymbol) % sizeAlphabet;
		m_message[i] = alphabet.GetSymbolForCode(codeSymbol);
	}
}

void �Message::CondingForGamma(std::pair<size_t, size_t> const& range, CAlphabet& alphabet, std::string gamma)
{
	size_t sizeAlphabet = alphabet.GetSize();
	for (auto i = range.first; i < range.second; i++)
	{
		int codeSymbol = alphabet.GetCodeForSymbol(m_message[i]);
		int codeGamma = alphabet.GetCodeForSymbol(gamma[i % gamma.size()]);
		codeSymbol = (codeGamma + codeSymbol) % sizeAlphabet;
		m_message[i] = alphabet.GetSymbolForCode(codeSymbol);
	}
}
