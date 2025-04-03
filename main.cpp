#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Score.h"
#include "Student.h"

using namespace std;
using namespace OOP;

/*
 Edit this class as follows:
 Complete the setWeight method.
*/
class Test {
    private:
        string message;
        vector<Score> scores;
    
    protected:
        double weight;

        /*
        setWeight accepts a variable of type double and sets the weight attribute of this class to the value of that variable
        */
        //YOUR CODE HERE
    public:
        Test() {
            weight = 0;
            scores = {};
        }
        void setMessage(string message) {
            this->message = message;
        }
        string getMessage() {
            return message;
        }
        double getWeight() {
            return weight;
        }
        void addScore(Score score) {
            scores.push_back(score);
        }
        void showScores() {
            cout<<"Scores to show: "<<scores.size()<<endl;
            cout<<"ID\tScore"<<endl;
            for(int i = 0; i<scores.size();i++) {
                cout<<scores[i].getID()<<"\t"<<scores[i].getScore()<<endl;
            }
        }    
};

/*
  Create a class called CourseTest that inherits from Test. Implement as follows.
  Add to it a parameterless public constructor that does the following:
   1. Sets the message to "Course test"
    
  Add to it a parameterized public constructor that accepts a variable named weight of type double and does the following:
   1. Sets the message to "Weighted course test"
   2. Sets weight in the parent class to the value of the passed variable
*/
//YOUR CODE HERE


/*
  Create a class called FinalTest that inherits from Test.
  Add to it a parameterless public constructor that does the following:
   1. Sets the message to "Final test"
   2. Sets the weight to .6
*/
//YOUR CODE HERE


/*
  Complete the sections required below
*/
int main() {
    cout.precision(3);
    srand(time(0));
    vector<Student> students = {};

    //Using the Student class, create three students, mark, ann, and sipps, with ids 1, 2 and 3 respectively
    //A student has an id and a name
    //1 Mark
    //2 Ann
    //3 Sipps
    //YOUR CODE HERE


    students.push_back(mark);
    students.push_back(ann);
    students.push_back(sipps);

    //Create a course test called cTest
    //Create a weighted test called weightedTest with a weight of 0.2
    //Create a final test called fTest
    //YOUR CODE HERE
    

    //Using a loop, and the Score class, add scores for the for each student created. 
    //Loop through the students
    //A score requires a student ID and the a value
    //value is the random score they received on the test
    //A random value is retrieved by: rand() % 101; //Get a random score between 0 and 100
    //YOUR CODE HERE


    //Using a loop, and the Score class, add scores to the weighted test for each student created. 
    //Loop through the students
    //A score requires a student ID and the a value
    //value is the random score they received on the test
    //A random value is retrieved by: rand() % 101; //Get a random score between 0 and 100
    //YOUR CODE HERE


    //Using a loop, and the Score class, add scores to the final test for each student created. 
    //Loop through the students
    //A score requires a student ID and the a value
    //value is the random score they received on the test
    //A random value is retrieved by: rand() % 101; //Get a random score between 0 and 100
    //YOUR CODE HERE


    vector<Test> tests = { cTest, weightedTest, fTest };

    //Show the test and scores for each test
    for(Test test : tests) {
        cout<<test.getMessage()<<" | Weight: " << test.getWeight() <<endl;
        test.showScores();        
        cout<<endl;
    }


    return 0;
}