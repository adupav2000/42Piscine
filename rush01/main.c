#include <stdio.h>

int check_col(int first_given_nb, int second_given_nb, int table[4])
{
	int i;
	int status;
	int status1;
	int visible_col;
	int visible_col1;

	i = 0;
	status = 0;// taille maximale rencontré 
	visible_col = 0;// nombre de colonne visible a un point donné
	status1 = 0;// taille maximale rencontré 
	visible_col1 = 0;// nombre de colonne visible a un point donné
	while (i != 4)
	{
		if (table[i] > status)
		{
			status = table[i];
			visible_col++;
		}
		if (table[3 - i] > status)
		{
			status1 = table[i];
			visible_col1++;
		}
		i++;
		
	}
	if ((visible_col == first_given_nb || visible_col == second_given_nb ) && (visible_col1 == first_given_nb || visible_col1 == second_given_nb ))
		return (1);
	return (0);
}

int coherent_first_place(int given_num, int to_be_used)
{
	if (given_num == 4 && to_be_used != 1)
		return (0);
	else if (given_num == 3 && to_be_used > 2)
		return (0);
	else if (given_num == 2 && to_be_used == 4)
		return (0);
	else if (given_num == 1 && to_be_used != 4)
		return (0);
	return (1);
}



int *giv_proposition(unsigned int stad)
{
	int test_table[4];
	int i;
	int i2;

	test_table = {1, 2, 3, 4};

	while ()
	{
		i2 = 0;
		while (i2 != i)
		{

		}
	}
}




int ft_table_size_4_cmp(int table[4], int table1[4])
{
	int i;

	i = 0;
	while (i != 4)
	{
		if (table[i] == table1[i])
			return (1);
		i++;
	}
	return (0);
}
int **proposition(int table[2][4])
{
	int return_table[4][4];
	int test_table[4];
	int i;
	int i2;
	int i3;

	i = 0;
	while (i != 4)
	{
		i2 = 0;
		test_table = {1, 2, 3, 4};
		while (i2 != 0)
		{

			while ()
			{

			}
			i2++;
		}
		i++;
	}
	return (return_table);
}

// int comb_exist(int )
int binary_count(int nbr)
{
	int table = {0,0,0,0};
	int i = 0;
	while (i != nbr)
	{

	}
}


/* Will give the possibilities according to the  */

int **give_proposition(int first_nb)
{
	int *table;
	if (nb == 4)
		table[0] = {1, 2, 3, 4};
	else if (nb == 1)
		table = {4, 1, 2, 3}, {4, 1, 3, 2}, {4, 2, 1, 3}, {4, 2, 3, 1}, {4, 3, 1, 2}, {4, 3, 2, 1};	
	else if (nb == 2)
		table = {2, 1, 4, 3}, {2, 4, 1, 3}, {2, 4, 3, 1}, {3, 1, 2, 4}, {3, 1, 4, 2}, {3, 2, 1, 4}, {3, 2, 4, 1}, {3, 4, 1, 2}, {3, 4, 2, 1};	
	else if (nb == 3)
		table = {2, 1, 3, 4}, {2, 3, 1, 4}, {2, 3, 4, 1};
	return table;

}


int *comp_table_list(int **table, int **table_2)
{
	int i;
	int i2;
	int i3;
	int **table;

	i = 0;
	i2 = 0;
	while (table[i])
	{
		while (table2[i])
		{
			
			i2++;
		}
		i++;
	}
}

int main()
{

}

