// mcimovie.cpp

#include <iostream>
#include <string>

// MCIMoviePlayer class
MCIMoviePlayer::MCIMoviePlayer(const std::string& fileName) {
    // Attempt to open the file
    std::ifstream file(fileName);
    if (!file) {
        // Print error message if failed to open the file
        std::cerr << "Cannot play movie: " << fileName << std::endl;
        std::cerr << "Cannot create MCI window for movie playback" << std::endl;
    }
}
