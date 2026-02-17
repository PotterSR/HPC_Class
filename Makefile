CXX = g++
CXXFLAGS = -O3 -I/home/saul/Documents/eigen-5.0.0 -std=c++11 -fopenmp
LDFLAGS = -lm -fopenmp

# Targets
laplace: laplace.cpp
	$(CXX) $(CXXFLAGS) -o laplace laplace.cpp $(LDFLAGS)

neumann: neuman .cpp
	$(CXX) $(CXXFLAGS) -o laplace laplace.cpp $(LDFLAGS)

clean:
	rm -f laplace