void delete_dish()
{
	system("cls");
	int i,sel;
	struct dish tem_dish;
	printf("\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\t\t\t|                ��ӭ����ɾ����Ʒ����                  |\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\n");

	while(1)
	{
		printf("\t\t\t�����������ѡ�����Ĳ���:\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   1 ɾ����Ʒ           |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   2 ������һ���˵�     |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t����������ѡ��1-2����");
		scanf("%d",&sel);

		while(sel<1 || sel>2)
		{
			printf("\t\t\t���������������������ѡ��1-2����");
			scanf("%d",&sel);
		}

		if(sel==1)
		{
			int flag = 0,sell;
			printf("\t\t\t��������ɾ���Ĳ�Ʒ����:");
			getchar();
			gets(tem_dish.dish_name);
			for(i=0; i<H; i++)
			{
				if (strcmp(tem_dish.dish_name, dishes[i].dish_name) == 0)
				{
					flag=1;
					printf("\t\t\t�ò�Ʒ��Ϣ����:\n");

					printf("\t\t\t%-10s","���");
					printf("%-18s","��Ʒ����");
					printf("%-12s","�۸�");
					printf("%-10s","��Ʒ����");
					printf("\n");
					printf("\t\t\t%-10d",i+1);
					printf("%-18s",dishes[i].dish_name);
					printf("%-12.2lf",dishes[i].dish_price);
					printf("%-10s",dishes[i].dish_type);
					printf("\n");
					break;
				}
			}
			printf("\t\t\t|������������������������|\n");
			printf("\t\t\t|      1 ȷ��ɾ��        |\n");
			printf("\t\t\t|      2 ����ɾ��        |\n");
			printf("\t\t\t|������������������������|\n");
			printf("\t\t\t����������ѡ��1-2����");
			scanf("%d",&sell);
			while (sell<1 || sell>2)
			{
				printf("�������,��������������ѡ��1-2����");
				scanf("%d", &sell);
			}
			if(sell==1)
			{
				if(i==H-1)
				{
					strcpy(dishes[i].dish_name,"");
					dishes[i].dish_price=0;
					strcpy(dishes[i].dish_type,"");
				}
				else
				{
					int j;
					for(j=i+1; j<H; j++)
						dishes[j-1]=dishes[j];
				}

				printf("\t\t\t�ò�Ʒ��Ϣ�Ѿ�ɾ��\n");
				filesave();


				if(flag==0)
				{
					printf("��ǰ�˵�û�д��ֲ�Ʒ��\n");
				}
				filesave();
			}
		}
		else if(sel==2)
		{
			filesave();
			admin_menu();
		}

	}
}
