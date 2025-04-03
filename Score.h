/*
 Do not edit this class
*/
#pragma once
#ifndef SCORE_H // include guard
#define SCORE_H

namespace OOP {
    class Score {
        private:
            int id;
            int score;
            Score(){} //Does nothing
        public:
            Score(int id, int score);
            int getID();
            int getScore();
    };
}

#endif