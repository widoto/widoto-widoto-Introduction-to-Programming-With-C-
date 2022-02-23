class Count {
public:
	int count;

	Count(int c)
	{
		count = c;
	}

	Count()
	{
		count = 0;
	}

	int getCount() const
	{
		return count;
	}

	void incrementCount() const
	{
		count++;
	}
};