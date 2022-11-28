all:derle bagla calistir
derle:
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
	g++ -c -I "./include" ./src/Liste.cpp -o ./lib/Liste.o
	g++ -c -I "./include" ./src/Dugum.cpp -o ./lib/Dugum.o
	g++ -c -I "./include" ./src/satirliste.cpp -o ./lib/satirliste.o
	g++ -c -I "./include" ./src/yoneticilist.cpp -o ./lib/yoneticilist.o
	g++ -c -I "./include" ./src/yoneticidugum.cpp -o ./lib/yoneticidugum.o
	g++ -c -I "./include" ./src/konsol_show.cpp -o ./lib/konsol_show.o
bagla:
	g++ ./lib/konsol_show.o ./lib/yoneticidugum.o ./lib/yoneticilist.o ./lib/satirliste.o ./lib/Liste.o ./lib/Dugum.o ./lib/main.o -o ./bin/program
calistir:
	./bin/program