

char compare(int &param1, int &param2)
{
	char result;
	if (param1 > param2)
	{
		result = '>';
	}

	else if (param1 < param2)		// this series of if statments compares the variables from
	{								//
		result = '<';
	}

	else if (param1 == param2)
	{
		result = '=';
	}
	
		
	return (result);				// returns result to the main function 
}
