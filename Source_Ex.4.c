#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

int main()
{
	int h_one, m_one, h_two, m_two, h_final, m_final;

	printf("Enter current time (hh mm): \n");
	scanf("%d %d", &h_one, &m_one);

	if (h_one > 23)
	{
		printf("Please enter anything from 00-23!");
		exit(0);
	}

	if (m_one > 59)
	{
		printf("Please enter anything from 00-59!");
		exit(0);
	}


	printf("How long do you want to sleep (hh mm): \n");
	scanf("%d %d", &h_two, &m_two);

	if (h_two > 23)
	{
		printf("Please enter anything from 00-23!");
		exit(0);
	}

	if (m_two > 59)
	{
		printf("Please enter anything from 00-59!");
		exit(0);
	}


	h_final = h_one + h_two;
	m_final = m_one + m_two;

	if (m_final > 59)
	{
		m_final = m_final - 60;
		h_final = h_final + 1;
	}

	if (h_final > 23)
	{
		h_final = h_final - 24;
	}

	printf("You will wake up at %.2d:%.2d\n", h_final, m_final);

}