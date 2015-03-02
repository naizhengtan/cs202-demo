all: survey hack test_linked_list

survey: linked_list.c  linked_list.h survey.c
	gcc -o survey -g linked_list.c survey.c

test_linked_list: linked_list.c  linked_list.h test_linked_list.c
	gcc -o test_linked_list -g linked_list.c test_linked_list.c

hack: hack.c
	gcc -o hack hack.c

clean:
	rm -f hack survey test_linked_list
