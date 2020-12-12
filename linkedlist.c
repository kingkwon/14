typedef struct linknode
{
	int data;

	void* next;

}
ln_t;

static ln_t *list; //포인터를 잡아서 그때그때 저장  

int create_node(int value)
{
	ln_t *ptr;
	ln_t *ptrTrav;
	int cnt =0;


	ptr = (ln_t*)malloc(sizeof(in_t));
	if(ptr == NULL)
	{
		//printf로 메모리 할당받지 못했음을 알려주기 
		return -1;
	}
//값 세팅  
	ptr->data = value;
	ptr->next = NULL;
//화살표 긋는 작업 	
	if(list == NULL)
	{
		list = ptr;
		cnt = 0;
	}
	else
	{
		ptrTrav = list;
		cnt++;
		while(ptrTrav->next != NULL)
		{
			ptrTrav = ptrTrav->next;
			cnt++;
		}
		ptrTrav->next = ptr;
	}

	return cnt;
}
