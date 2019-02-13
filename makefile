main: Controller.o Main.o
	clang++ Main.o Controller.o
Main.o:Main.cpp A2Const.hpp Controller.hpp
	clang++ -c Main.cpp
Controller.o: Controller.cpp Controller.hpp
	clang++ -c Controller.cpp
