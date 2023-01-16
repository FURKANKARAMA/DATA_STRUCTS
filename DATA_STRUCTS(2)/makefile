all:derle bagla calistir
derle:
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
	g++ -c -I "./include" ./src/Dugum.cpp -o ./lib/Dugum.o
	g++ -c -I "./include" ./src/hucredugum.cpp -o ./lib/hucredugum.o
	g++ -c -I "./include" ./src/ikiliaramaagaci.cpp -o ./lib/ikiliaramaagaci.o
	g++ -c -I "./include" ./src/doku_olustur.cpp -o ./lib/doku_olustur.o
	g++ -c -I "./include" ./src/hucrelist.cpp -o ./lib/hucrelist.o
	g++ -c -I "./include" ./src/kuyruk.cpp -o ./lib/kuyruk.o
	g++ -c -I "./include" ./src/Radix.cpp -o ./lib/Radix.o
	g++ -c -I "./include" ./src/Arraylist.cpp -o ./lib/Arraylist.o
	g++ -c -I "./include" ./src/organ_olustur.cpp -o ./lib/organ_olustur.o
	g++ -c -I "./include" ./src/Sistem.cpp -o ./lib/Sistem.o
bagla:
	g++ ./lib/Sistem.o ./lib/organ_olustur.o ./lib/Arraylist.o ./lib/Radix.o ./lib/kuyruk.o ./lib/hucrelist.o ./lib/doku_olustur.o ./lib/ikiliaramaagaci.o ./lib/hucredugum.o ./lib/Dugum.o ./lib/main.o -o ./bin/program
calistir:
	./bin/program