src = shapes.cpp shape_tese.cpp
project = shape
shape: $(src)
	g++ $^ -lgtest -lgtest_main -lpthread -o $@
run: shape
	./$^
clean:
	rm *.ou
