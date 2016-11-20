#pragma once
class Incrementer
{

private:
	int value;
	int increment;
	Incrementer();

public:
	int Increment();
	int GetValue();

	class Builder
	{
	private:
		int increment;
		int start;

	public:
		Builder();

		Builder& SetIncrement(int increment);

		Builder& SetStart(int start);

		Incrementer&& Build();
	};
};
