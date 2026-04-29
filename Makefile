CXX = g++
CXXFLAGS = -std=c++20 -Wall -O2
TARGET = main
SRCS = main.cpp

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: clean run
