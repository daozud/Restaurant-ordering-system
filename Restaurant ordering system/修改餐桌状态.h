void modify_table()
{
	system("cls");
	int i,j,sel,k;
	printf("\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\t\t\t|               ��ӭ�����޸Ĳ���״̬����               |\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\t\t\t���±�Ų�����δ֧����\n");
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
			printf("\t\t\tһ����֧����%.2lfԪ\n",tables[i].table_price);
			printf("\t\t\t----------------------------------------------------------\n");
			printf("\n");
		}

	}
	while(1)
	{
		printf("\t\t\t�����ѡ�����Ĳ���:\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   1 ����֧��           |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   2 ������һ���˵�     |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t����������ѡ��1-2����");
		scanf("%d",&sel);
		while(sel<1 || sel>2)
		{
			printf("\t\t\t���������������������ѡ��1-2��:");
			scanf("%d",&sel);
		}

		if(sel==1)
		{
			printf("\t\t\t��������Ҫ����֧���Ĳ����ţ�");
			scanf("%d",&k);
			if(tables[k-1].state==1)
			{
				tables[k-1]=ttt;
				printf("\t\t\t֧���ɹ���\n");
				filesave();
			}
			else
			{
				printf("\t\t\t�ò������ڿ���״̬����ȷ���Ƿ�������ȷ\n");
			}
		}

		else if(sel==2)
		{
			filesave();
			admin_menu();
		}
	}
	printf("\t\t\t");
	system("pause");
}
