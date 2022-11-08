#include <iostream>
#include <stdio.h>      // for NULL 
#include <stdlib.h>     // for srand, rand 
#include <time.h>  
using namespace std;

/* MUHAMMAD ASHHAR AMIR
I222420 NUCES ISB
SE B*/

int correct_Count = 0;

int Question(){//func for generating the question to be asked
    int question_Category = rand()%((4-1) + 1) + 1;
    return question_Category;
}
//func that checks if the probability lies within the answering range
bool IscorrectlyAnswered(int prob_Sciences, int prob_History, int prob_Sports, int prob_Pop){
    if((prob_Sciences>=50) && (prob_Sciences<=100)){
        return true;
        correct_Count++;
    }else{
        return false;
    }
    if((prob_History>=50) && (prob_History<=100)){
        return true;
        correct_Count++;
    }else{
        return false;
    }
    if((prob_Sports>=50) && (prob_Sports<=100)){
        return true;
        correct_Count++;
    }else{
        return false;
    }
    if((prob_Pop>=50) && (prob_Pop<=100)){
        return true;
        correct_Count++;
    }else{
        return false;
    }
    
}
//func that adds the reward
int rewardAmount(){
    if((correct_Count>=1) && (correct_Count<=3)){
        return (100);
    }else if((correct_Count>=4) && (correct_Count<=6)){
        return (1000);
    }else if((correct_Count>=7) && (correct_Count<=10)){
        return (10000);
    }else if((correct_Count>=10) && (correct_Count<=15)){
        return (15000);
    }
}
//func that checks if the user is still eligible in the game
bool stayCheck(int prob_Sciences, int prob_History, int prob_Sports, int prob_Pop){
    if(prob_Sciences > 20 && prob_History > 20 && prob_Sports > 20 && prob_Pop > 20){
        return true;
    }else{
        return false;
        return 0;
    }
}

int main(){
    srand(time(NULL));//generating a random time seed
    int prize_Money = 0;

    //generating all the random values for the probs
    int prob_Sciences = rand()%((100-50) + 1) + 50;
    int prob_History = rand()%((100-50) + 1) + 50;
    int prob_Sports = rand()%((100-50) + 1) + 50;
    int prob_Pop = rand()%((100-50) + 1) + 50;
    int questionCount = 0;
    while((questionCount<=15) && (stayCheck(prob_Sciences, prob_History, prob_Sports, prob_Pop))){
        int QuestionPicked = Question();
        switch (QuestionPicked)
    {
    case 1://using cases to pick questions
    cout << "Asking a question from Sciences: " << endl;
    if(IscorrectlyAnswered){
        //-10 the prob, adding the suitable reward, +1 the question and answered count
        cout << "This question was correctly answered!" << endl;
        prob_Sciences-=10;
        prize_Money += rewardAmount();
        cout << "Reward: " << prize_Money << endl;
        correct_Count++;
        questionCount++;
        // continue;
    }else{
        cout << "Question incorrectly answered!" << endl;
        questionCount++;
    }
        
    
    case 2:
    cout << "Asking a question from History: " << endl;
    if(IscorrectlyAnswered){
        cout << "This question was correctly answered!" << endl;
        prob_History-=10;
        prize_Money += rewardAmount();
        cout << "Reward: " << prize_Money << endl;
        correct_Count++;
        questionCount++;
        // continue;
    }else{
        cout << "Question incorrectly answered!" << endl;
        questionCount++;
    }
        
    
    case 3:
    cout << "Asking a question from Sports: " << endl;
    if(IscorrectlyAnswered){
        cout << "This question was correctly answered!" << endl;
        prob_Sports-=10;
        prize_Money += rewardAmount();
        cout << "Reward: " << prize_Money << endl;
        correct_Count++;
        questionCount++;
        // continue;
    }else{
        cout << "Question incorrectly answered!" << endl;
        questionCount++;
    }
        
    
    case 4:
    cout << "Asking a question from Pop: " << endl;
    if(IscorrectlyAnswered){
        cout << "This question was correctly answered!" << endl;
        prob_Pop-=10;
        prize_Money += rewardAmount();
        cout << "Reward: " << prize_Money << endl;
        correct_Count++;
        questionCount++;
        // continue;
    }else{
        cout << "Question incorrectly answered!" << endl;
        questionCount++;
    }
    }
}
    cout << "\n\n\n";
    cout << "Correctly Answered: " << correct_Count;
}