#include <iostream>
#include <vector>

extern "C" {
    // Function to convert image data to grayscale
    void grayscale(uint8_t* data, int width, int height) {
        for (int i = 0; i < width * height * 4; i += 4) {
            uint8_t r = data[i];
            uint8_t g = data[i + 1];
            uint8_t b = data[i + 2];

            // Calculate the average to convert to grayscale
            uint8_t avg = (r + g + b) / 3;

            // Set the red, green, and blue channels to the average
            data[i] = avg;     // Red
            data[i + 1] = avg; // Green
            data[i + 2] = avg; // Blue
        }
    }
}
