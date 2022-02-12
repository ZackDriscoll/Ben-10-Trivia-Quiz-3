#include <iostream>
#include <chrono>
#include <string>


//Prototype functions
void Intro();
void QuestionsOneThroughTen();
void Ending();
void PassByPointers(const std::string* name);
void SpeedStats(const std::string* name);

//Create score variable to check the player's answer accuracy.
int score = 0;

//Create a variable for the user input
std::string userInput;

//Create a variable to hold the user's name.
std::string UserInput;
std::string name;

int main()
{
    //Run Intro function
    Intro();

    //Run the function for the first 10 questions
    QuestionsOneThroughTen();

    //Question #11
    std::cout << "\n\nBonus Question #11 (Just for fun!): What are Ben's Original ten transformations?\n";
    std::cout << "Below is a list of some of the transformations that appeared in the original series.\n";
    std::cout << "\nBen Wolf/Blitzwolfer, Cannonbolt, Diamondhead, Ditto, Eye Guy, Four Arms, Frankenstrike / Ben Viktor, Ghostfreak, Grey Matter, Heatblast, Ripjaws, Snare - oh / Ben Mummy, Stinkfly, Upchuck, Upgrade, Way Big, Wildmutt, Wildvine, XLR8.\n";
    std::cout << "\nPlease enter the names of the original ten alien transformations in the same format as the list.\n";
    std::cout << "\nNote: The answer is case and spacing sensitive, so be careful when entering your answer and keep them in alphabetical order.";
    std::cout << "\nHint: The list is already in alphabetical order, so just pick the aliens as you go through the list. ;) ";
    std::cin >> userInput;

    if (userInput == "Diamondhead, Four Arms, Ghostfreak, Grey Matter, Heatblast, Ripjaws, Stinkfly, Upgrade, Wildmutt, XLR8.")
    {
        std::cout << "\nThat is correct! Well done!";
    }
    else if (userInput == "speed")
    {
        SpeedStats(&name);
    }
    else
    {
        std::cout << "\nI'm sorry, but that is incorrect.";
    }

    //Run Ending function
    Ending();

    return 0;
}

//Display Intro function
void Intro()
{
    std::cout << "\n\n\t\t*** Weclome to the Ben 10 Trivia Quiz! ***\n\n";

    std::cout << "For each question please enter the number response you'd like to answer and press enter.\n\n";

    std::cout << "Please enter your name: ";
    std::cin >> UserInput;

    std::cout << "If at any point you'd like to see speed stats for nerds, just enter 'speed' into any input field.";
}

void QuestionsOneThroughTen()
{
    //Begin questions with exceptions
    try
    {
        //Question #1
        std::cout << "\n\nQuestion #1: What was the very first alien Ben transformed into?\n";
        std::cout << "1.) Diamondhead\n";
        std::cout << "2.) Wildmutt\n";
        std::cout << "3.) Cannonbolt\n";
        std::cout << "4.) Heatblast\n";
        std::cout << "5.) XLR8\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == "4")
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else if (userInput == "speed")
        {
            //Run the Pointers function
            SpeedStats(&name);
        }
        else
        {
            throw userInput;
        }

        system("pause");
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. Heatblast was Ben's first transformation.\n";

        system("pause");
    }

    try
    {
        //Question #2
        std::cout << "\nQuestion #2: What is the official name of Ben's first watch?\n";
        std::cout << "1.) The Unitrix\n";
        std::cout << "2.) Trix\n";
        std::cout << "3.) The Omnitrix\n";
        std::cout << "4.) The Ultimatrix\n";
        std::cout << "5.) The Quintrix\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == "3")
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else if (userInput == "speed")
        {
            //Run the Pointers function
            SpeedStats(&name);
        }
        else
        {
            throw userInput;
        }

        system("pause");
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. The offical name of Ben's watch is the Omnitrix.\n";

        system("pause");
    }

    try
    {
        //Question #3
        std::cout << "\nQuestion #3: What was the very first alien Ben transformed into in Ben 10 Alien Force?\n";
        std::cout << "1.) Chromastone\n";
        std::cout << "2.) Swampfire\n";
        std::cout << "3.) Jetray\n";
        std::cout << "4.) Humungousaur\n";
        std::cout << "5.) Spidermonkey\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == "2")
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else if (userInput == "speed")
        {
            //Run the Pointers function
            SpeedStats(&name);
        }
        else
        {
            throw userInput;
        }

        system("pause");
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. Ben's first transformation in Ben 10 Alien Force was Swampfire.\n";

        system("pause");
    }

    try
    {
        //Question #4
        std::cout << "\nQuestion #4: How many ultimate transformations do we see in Ben 10 Ultimate Alien?\n";
        std::cout << "1.) Six\n";
        std::cout << "2.) Ten\n";
        std::cout << "3.) Eight\n";
        std::cout << "4.) Nine\n";
        std::cout << "5.) Five\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == "4")
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else if (userInput == "speed")
        {
            //Run the Pointers function
            SpeedStats(&name);
        }
        else
        {
            throw userInput;
        }

        system("pause");
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. There were nine total ultimate transformations in Ben 10 Ultimate Alien. ";
        std::cout << "\nThis included: Swampfire, Spidermonkey, Big Chill, Echo Echo, Humungousaur, Wildmutt, Cannonbolt, Way Big, and Ben 10,000.\n";

        system("pause");
    }

    try
    {
        //Question #5
        std::cout << "\nQuestion #5: What is the name of Ben's first girlfriend?\n";
        std::cout << "1.) Gwen\n";
        std::cout << "2.) Lana\n";
        std::cout << "3.) Sarah\n";
        std::cout << "4.) Emily\n";
        std::cout << "5.) Julie\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == "5")
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else if (userInput == "speed")
        {
            //Run the Pointers function
            SpeedStats(&name);
        }
        else
        {
            throw userInput;
        }

        system("pause");
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. Ben's first girlfriend was Julie.\n";

        system("pause");
    }

    try
    {
        //Question #6
        std::cout << "\nQuestion #6: Which transformation gained a mind of its own and escaped the Omnitrix?\n";
        std::cout << "1.) Ben Mummy / Snaro\n";
        std::cout << "2.) Ghostfreak\n";
        std::cout << "3.) Wildvine\n";
        std::cout << "4.) Ben Wolf / Blitzwolfer\n";
        std::cout << "5.) Ben Viktor / Frankenstrike\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == "2")
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else if (userInput == "speed")
        {
            //Run the Pointers function
            SpeedStats(&name);
        }
        else
        {
            throw userInput;
        }

        system("pause");
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. Ghostfreak gained a mind of his own and escaped the Omnitrix.\n";

        system("pause");
    }

    try
    {
        //Question #7
        std::cout << "\nQuestion #7: What is the name of Ben's doppelganger?\n";
        std::cout << "1.) Azmuth\n";
        std::cout << "2.) Vilgax\n";
        std::cout << "3.) Albedo\n";
        std::cout << "4.) Driscoll\n";
        std::cout << "5.) Argit\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == "3")
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else if (userInput == "speed")
        {
            //Run the Pointers function
            SpeedStats(&name);
        }
        else
        {
            throw userInput;
        }

        system("pause");
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. Ben's doppelganger is Albedo.\n";

        system("pause");
    }

    try
    {
        //Question #8
        std::cout << "\nQuestion #8: What is the name of Ben's time travelling friend?\n";
        std::cout << "1.) Tetrax\n";
        std::cout << "2.) Professor Paradox\n";
        std::cout << "3.) Eon\n";
        std::cout << "4.) Clockwork\n";
        std::cout << "5.) Dr. Viktor\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == "2")
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else if (userInput == "speed")
        {
            //Run the Pointers function
            SpeedStats(&name);
        }
        else
        {
            throw userInput;
        }

        system("pause");
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. Ben's time travelling friend is Professor Paradox.\n";

        system("pause");
    }

    try
    {
        //Question #9
        std::cout << "\nQuestion #9: Which other Cartoon Network show did Ben have a crossover with?\n";
        std::cout << "1.) Secret Saturdays\n";
        std::cout << "2.) Adventure Time\n";
        std::cout << "3.) Steven Universe\n";
        std::cout << "4.) Generator Rex\n";
        std::cout << "5.) Regular Show\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == "1" || userInput == "4")
        {
            std::cout << "\nCorrect! Fun fact: Ben actually had a crossover with both Generator Rex and the Secret Saturdays.\n";
            score++;
        }
        else if (userInput == "speed")
        {
            //Run the Pointers function
            SpeedStats(&name);
        }
        else
        {
            throw userInput;
        }

        system("pause");
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. Ben had a crossover with both Generator Rex and the Secret Saturdays.\n";

        system("pause");
    }

    try
    {
        //Question #10
        std::cout << "\nQuestion #10: Who is Ben's greatest foe?\n";
        std::cout << "1.) Aggregor\n";
        std::cout << "2.) Albedo\n";
        std::cout << "3.) Ghostfreak\n";
        std::cout << "4.) Vilgax\n";
        std::cout << "5.) The Forever Knights\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == "4")
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else if (userInput == "speed")
        {
            //Run the Pointers function
            SpeedStats(&name);
        }
        else
        {
            throw userInput;
        }

        system("pause");
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. Ben's greatest foe is Vilgax.\n";

        system("pause");
    }
}

//End Game function
void Ending()
{
    std::cout << "\nYou've answered all the questions! You're final score is " << score << " / 10!\n\n";
    std::cout << "\n\t\t*** Thanks for Playing! *** \n\n";
}

void PassByPointers(const std::string* name)
{
    std::string Name = "";

    Name = Name + *name;
}

void SpeedStats(const std::string* name)
{
    const int maxFunctionCalls = 1000000;

    //******************** Start calling function passing by pointers ********************

    //Start snapshot of time to use to figure out how long all these function calls take passing by value
    auto startTimePassByPointers = std::chrono::high_resolution_clock::now();

    //Start calls to function here
    for (int i = 0; i < maxFunctionCalls; i++)
    {
        PassByPointers(name);
    }
    //Stop snapshot of time
    auto stopTimePassByPointers = std::chrono::high_resolution_clock::now();

    // Figure out the time that has passed between our start and stop
    auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(stopTimePassByPointers - startTimePassByPointers).count();
    long milliseconds2 = (long)(duration2 / 1000) % 1000;
    long seconds2 = (((long)(duration2 / 1000) - milliseconds2) / 1000) % 60;

    // Summary
    std::cout << "\n\n\t**** Pass by Pointer microseconds (million of a sec.) = " << duration2 << std::endl;
    std::cout << "\n\n\t**** Pass by Pointer Seconds = " << seconds2 << std::endl;

    //******************** End calling function passing by pointers ********************
}