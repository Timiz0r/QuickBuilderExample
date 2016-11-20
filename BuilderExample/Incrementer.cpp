#include <utility>
#include "Incrementer.h"

//returns old value
int Incrementer::Increment()
{
	int result = value;
	value += increment;

	return result;
}

int Incrementer::GetValue()
{
	return value;
}

//builder
Incrementer::Builder::Builder() : increment{ 0 }, start{ 0 }
{
}

Incrementer::Builder& Incrementer::Builder::SetIncrement(int increment)
{
	this->increment = increment;
	return *this;
}

Incrementer::Builder& Incrementer::Builder::SetStart(int start)
{
	this->start = start;
	return *this;
}

Incrementer&& Incrementer::Builder::Build()
{
	Incrementer incrementer;
	incrementer.increment = increment;
	incrementer.value = start;

	return std::move(incrementer);
}
