void fileread()
{
	FILE *fp;
	fp=fopen("admin.txt","r");
	if(fp==NULL)
	{
		printf("�ļ���ʧ��\n");
		exit(0);
	}
	fread(admins,sizeof(struct admin),M,fp);
	fclose(fp);

	FILE *fq;
	fq=fopen("dishes.txt","r");
	if(fq==NULL)
	{
		printf("�ļ���ʧ��\n");
		exit(0);
	}
	fread(dishes,sizeof(struct dish),H,fq);
	fclose(fq);

	FILE *fz;
	fz=fopen("tables.txt","r");
	if(fz==NULL)
	{
		printf("�ļ���ʧ��\n");
		exit(0);
	}
	fread(tables,sizeof(struct table),N,fz);
	fclose(fz);

	FILE *ft;
	ft=fopen("table_dishes.txt","r");
	if(ft==NULL)
	{
		printf("�ļ���ʧ��\n");
		exit(0);
	}
	fread(table_dishes,sizeof(struct dish),N*H,ft);
	fclose(ft);


	printf("\t\t\t��ȡ�ļ��ɹ���\n");
}
