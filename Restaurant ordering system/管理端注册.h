void admin_registers()
{

	system("cls");
	int i,sel;
	struct admin temAdmin;

	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\t\t\t|                      ��ӭ����                        |\n");
	printf("\t\t\t|           |�����ִĵ��ϵͳ����Աע�����|           |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                  1   ��ʼע��                        |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                  2   ������һ���˵�                  |\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\t\t\t����������ѡ��1-2����");
	scanf("%d",&sel);
	getchar();
	while (sel<1 || sel>2)
	{
		printf("\t\t\t�������,��������������ѡ��1-2����");
		scanf("%d", &sel);
	}
	if(sel==1)
	{
		printf("\t\t\t-------------------------------------------\n");
		printf("\t\t\t����дע����Ϣ:\n");
		printf("\t\t\t-------------------------------------------\n");
		printf("\t\t\t�����û���:");
		gets(temAdmin.admin_account);
		printf("\t\t\t��������:");
		gets(temAdmin.admin_password);
		for (i = 0; i < M; i++)
		{
			while (strcmp(admins[i].admin_account, temAdmin.admin_account)==0)
			{
				//������ǿ���ʹ�õ��û�����ֱ���˳�ע�ᣬ���ص�������
				printf("\t\t\t-------------------------------------------\n");
				printf("\t\t\t���û����ѱ�ע�ᣡ��������дע����Ϣ:\n");
				printf("\t\t\t-------------------------------------------\n");
				printf("\t\t\t�����û���:");
				gets(temAdmin.admin_account);
				printf("\t\t\t��������:");
				gets(temAdmin.admin_password);
			}
		}
		for (i = 0; i < M; i++)
		{
			if (strcmp(admins[i].admin_account,"")==0)
			{
				admins[i]=temAdmin;
				break;
			}
		}
		printf("\t\t\tע��ɹ�������\n");
	}
	else if(sel==2)
	{
		menu();
	}

	//��Ϊ���û�ע��ɹ��������û�ע����Ϣ��Ҫ����ȫ������
	filesave();
	printf("\t\t\t");
	system("pause");
	menu();
}
