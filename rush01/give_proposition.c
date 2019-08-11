
/*Will return a table of all the possible combinations
for a given first number*/
/*argument is the number of column you expect to see*/
/*returns a two dimensional array containing diferent possibilities*/
int **give_proposition(int first_nb)
{

	int **table;
	if (nb == 4)
		table = {{1, 2, 3, 4}};
	else if (nb == 1)
		table = {{4, 1, 2, 3}, {4, 1, 3, 2}, {4, 2, 1, 3}, {4, 2, 3, 1}, {4, 3, 1, 2}, {4, 3, 2, 1}};	
	else if (nb == 2)
		table = {{2, 1, 4, 3}, {2, 4, 1, 3}, {2, 4, 3, 1}, {3, 1, 2, 4}, {3, 1, 4, 2}, {3, 2, 1, 4}, {3, 2, 4, 1}, {3, 4, 1, 2}, {3, 4, 2, 1}};	
	else if (nb == 3)
		table = {{2, 1, 3, 4}, {2, 3, 1, 4}, {2, 3, 4, 1}};

	return table;
}
