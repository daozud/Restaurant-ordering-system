void show_table()
{
	system("cls");
	int i,j,sel;

	printf("\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\t\t\t|               ��ӭ������ʾ����״̬����               |\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\t\t\t���±�Ų������ڹ���״̬��\n");
	for(i=0; i<N; i++)
	{
		if(tables[i].state==1)
		{
			printf("\t\t\t----------------------------------------------------------\n");
			printf("\t\t\t%d������\n",i+1);
			printf("\t\t\t�ò�������%d��\t���������%d��\n",tables[i].meal_number,tables[i].dish_number);
			printf("\t\t\t�˵���");
			for(j=0; j<tables[i].dish_number; j++)
			{
				printf("%s ",table_dishes[i][j].dish_name);
			}
			printf("\n");
			printf("\t\t\t״̬��");
			if(tables[i].state==1)
			{
				printf("δ֧��\n");
			}
			printf("\t\t\t----------------------------------------------------------\n");
			printf("\n");
		}

	}

	printf("\t\t\t");
	system("pause");
}
