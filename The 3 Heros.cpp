#include <iostream>
#include <stdlib.h>

int main()
{
    std::cout << "Long time ago there were 3 diffrenet heroes!\n";
    std::cout << "They were all respected by there villagers as they ventured and protected the people of the village from monsters.\n";
    std::cout << "The three heroes were divided amongst their race.\n";
    std::cout << "The Elf was accurate with bow and agilie however weak to close attacks\n";
    std::cout << "The Wizard was powerful but took time to cast his spells\n";
    std::cout << "The Drawf was strong but lacked mobility\n";
    std::cout << "\n";

    int hero;

    std::cout << "Chose your hero (input number):\n";
    std::cout << "The Elf(1)        The Wizard(2)        The Dawrf(3)\n";
    std::cout << "Chose your hero (input number)\n";
    std::cin >> hero;
    std::cout << "\n";

    while (hero < 1 || hero > 3) {
        std::cout << "Try a number 1 - 3 please to move forwad\n";
        std::cin >> hero;
    }
    switch (hero) {

    case 1:
        std::cout << "You have chosen the Elf. Now your adventure start you off in the dark forest where you have to save a lost girl\n";
        std::cout << "\n";
        std::cout << "You run into a fox! What shall you do?!\n";
        int anwser1E;
        std::cout << "1) Step away and shoot an arrow\n";
        std::cout << "2) Pet the Fox\n";
        std::cout << "3) Smack the fox with your bow\n";
        std::cin >> anwser1E;


        while (anwser1E < 1 || anwser1E > 3) {
            std::cout << "\n";
            std::cout << "please chose a number 1-3 to continue your quest\n";
            std::cin >> anwser1E;
        }
        if (anwser1E == 1) {
            std::cout << "\n";
            std::cout << "The fox was defeated\n";
            std::cout << "\n";
        }

        if (anwser1E == 2) {
            std::cout << "\n";
            std::cout << "The fox was happy and left peacefully\n";
            std::cout << "\n";
        }
        while (anwser1E == 3) {
            std::cout << "\n";
            std::cout << "The fox tore your head off!\n";
            std::cout << "\n";
            std::cout << "Make your choice again, but wisely\n";
            std::cin >> anwser1E;

            if (anwser1E == 1) {
                std::cout << "\n";
                std::cout << "The fox was defeated\n";
                std::cout << "\n";
            }
            else if (anwser1E == 2) {
                std::cout << "\n";
                std::cout << "The fox was happy and left peacefully";
                std::cout << "\n";
            }
        }

        std::cout << "You adventure is lengthy and you need water.\n";
        std::cout << "1) Get water from the stream\n";
        std::cout << "2) Get water from the tree\n";
        std::cout << "\n";
        int anwser2E;
        std::cin >> anwser2E;

        while (anwser2E > 2 || anwser2E < 1) {
            std::cout << "\n";
            std::cout << "please chose a number 1-2 to continue your quest\n";
            std::cout << "\n";
            std::cin >> anwser2E;
            std::cout << "You adventure is lengthy and you need water\n";
            std::cout << "1) Get water from the stream\n";
            std::cout << "2) Get water from the tree\n";
            std::cout << "\n";
            int anwser2E;
            std::cin >> anwser2E;
        }


        while (anwser2E == 2) {
            std::cout << "\n";
            std::cout << "The tree was posinous and you died!\n";
            std::cout << "\n";
            std::cout << "choose again but wisely\n";
            std::cout << "\n";
            std::cin >> anwser2E;
        }

        if (anwser2E == 1) {
            std::cout << "\n";
            std::cout << "You have quenched your thirst\n";
            std::cout << "\n";
        }
        int anwser3E;
        std::cout << "You finnaly made it to the middle of the forest where you find the girl being taken hostage by an ogre\n";
        std::cout << "1) Shoot the Ogre in the eye\n";
        std::cout << "2) Shoot the Orge in head\n";
        std::cout << "3) Shoot the Orge in his foot\n";
        std::cin >> anwser3E;

        while (anwser3E == 2) {
            std::cout << "\n";
            std::cout << "The Orge fall immediately down with girl trapping her\n";
            std::cout << "\n";
            std::cout << "Try again and choose wisely\n";
            std::cin >> anwser3E;
        }
        if (anwser3E == 1) {
            std::cout << "\n";
            std::cout << "The Orge dropped the girl and the girl ran safely back into your safety\n";
            std::cout << "\n";
            std::cout << "You hero once again!";
        }
        else if (anwser3E == 3) {
            std::cout << "\n";
            std::cout << "The Orge dropped the girl by covering is foot in pain and the girl ran safely back into your safety\n";
            std::cout << "\n";
            std::cout << "You hero once again!";

       
        }

        break;

    case 2:
        std::cout << "You have chosen the Wizard! Your adventure starts you from the ruin of Witch of the Waste to seek the wizard who attacks your village\n";
        std::cout << "\n";
        std::cout << "You run into the witches henchman! What attack should you use?!\n";
        int anwser1W;
        std::cout << "1) Summon a toad to do your bidden\n";
        std::cout << "2) Cast a spell\n";
        std::cout << "3) Smack the henchman with your staff\n";
        std::cin >> anwser1W;


        while (anwser1W < 1 || anwser1W > 3) {
            std::cout << "\n";
            std::cout << "please chose a number 1-3 to continue your quest\n";
            std::cin >> anwser1W;
        }
        if (anwser1W == 1) {
            std::cout << "\n";
            std::cout << "The henchman was swallowed up by the toad\n";
            std::cout << "\n";
        }

        if (anwser1W == 2) {
            std::cout << "\n";
            std::cout << "The henchman turned into fairy dust after the spell\n";
            std::cout << "\n";
        }
        while (anwser1W == 3) {
            std::cout << "\n";
            std::cout << "The henchman used its hand to hand combat against you! You lost!\n";
            std::cout << "\n";
            std::cout << "Make your choose again, wisely\n";
            std::cin >> anwser1W;

            if (anwser1W == 1) {
                std::cout << "\n";
                std::cout << "The henchman was swallowed up by the toad\n";
                std::cout << "\n";
            }
            else if (anwser1W == 2) {
                std::cout << "\n";
                std::cout << "The henchman turned into fairy dust after the spell";
                std::cout << "\n";
            }
        }

        std::cout << "You adventure is requires you to rest? where shall you rest\n";
        std::cout << "1) Sleep under a tree\n";
        std::cout << "2) Cuddle a bear\n";
        std::cout << "3) Cast a spell to put a barrier where youll sleep\n";
        std::cout << "\n";
        int anwser2W;
        std::cin >> anwser2W;

        while (anwser2W > 3 || anwser2W < 1) {
            std::cout << "\n";
            std::cout << "please chose a number 1-3 to continue your quest\n";
            std::cout << "\n";
            std::cin >> anwser2W;
            std::cout << "You adventure is lengthy and you need water\n";
            std::cout << "1) Sleep under a tree\n";
            std::cout << "2) Cuddle a bear\n";
            std::cout << "3) Cast a spell to put a barrier where youll sleep\n";
            std::cout << "\n";
            int anwser2W;
            std::cin >> anwser2W;
        }


        while (anwser2W == 2) {
            std::cout << "\n";
            std::cout << "The bear ate you!\n";
            std::cout << "\n";
            std::cout << "choose again but wisely\n";
            std::cout << "\n";
            std::cin >> anwser2W;
        }

        if (anwser2W == 1) {
            std::cout << "\n";
            std::cout << "You wake up to an apple falling on your head and now you screw over millions of physics students\n";
            std::cout << "\n";
        }

        else if (anwser2W == 3) {
            std::cout << "\n";
            std::cout << "The spell gives you the warmth and the protection to sleep soundly\n";
            std::cout << "\n";
        }

        int anwser3W;
        std::cout << "You finnaly made it to the top of the mountain where the Witch was ready to fight! What shall you do?\n";
        std::cout << "1) Cast your most powerful spell\n";
        std::cout << "2) Choose diplomacy\n";
        std::cout << "3) Summon a wolf to do your bidden\n";
        std::cin >> anwser3W;

        while (anwser3W == 2) {
            std::cout << "\n";
            std::cout << "The witch ignored your peace talk and cast there spell onto you. You vanish into thin air\n";
            std::cout << "\n";
            std::cout << "Try again and choose not so forgiving\n";
            std::cin >> anwser3W;
        }
        if (anwser3W == 1) {
            std::cout << "\n";
            std::cout << "Your spell sucks the witch into the black void never to be seen again!\n";
            std::cout << "\n";
            std::cout << "You hero once again!";
        }
        else if (anwser3W == 3) {
            std::cout << "\n";
            std::cout << "The wolf bites the witch and in which you cast a spell to turn her into fairy dust.\n";
            std::cout << "\n";
            std::cout << "You hero once again!";


        }
        break;

    case 3:
        std::cout << "You have chosen the Drawf! Yor adventures starts with you in the high mountains of the Waste where skeletons have raided your city and you seek revenge\n";
        std::cout << "\n";
        std::cout << "Your adventure has already gotten you to be tired! What shall you do?!\n";
        int anwser1D;
        std::cout << "1) Rest in cave with bats\n";
        std::cout << "2) Rest on the sharp rocks on the road\n";
        std::cin >> anwser1D;


        while (anwser1D < 1 || anwser1D > 2) {
            std::cout << "\n";
            std::cout << "please chose a number 1-2 to continue your quest\n";
            std::cin >> anwser1D;
        }
        if (anwser1D == 2) {
            std::cout << "\n";
            std::cout << "The rocks made it uncomfortable to sleep so you moved on\n";
            std::cout << "\n";
        }

        while (anwser1D == 1) {
            std::cout << "\n";
            std::cout << "The bats gave you Coivd - 19 and you were unvaccinated and died\n";
            std::cout << "\n";
            std::cout << "Make your choice again, and this time wisely\n";
            std::cin >> anwser1D;

            if (anwser1D == 2) {
                std::cout << "\n";
                std::cout << "The rocks made it uncomfortable to sleep so you moved on\n";
                std::cout << "\n";
            }
           
        }

        std::cout << "You come across a aggresive bear! What should you do?\n";
        std::cout << "1) Swing your axe at it\n";
        std::cout << "2) Throw your axe at it\n";
        std::cout << "3) Hug the bear\n";
        std::cout << "4) Run away\n";
        std::cout << "\n";
        int anwser2D;
        std::cin >> anwser2D;

        while (anwser2D > 4 || anwser2D < 1) {
            std::cout << "\n";
            std::cout << "please chose a number 1-4 to continue your quest\n";
            std::cout << "\n";
            std::cin >> anwser2D;
            std::cout << "You come across a aggresive bear\n";
            std::cout << "1) Swing your axe at it\n";
            std::cout << "2) Throw your axe at it\n";
            std::cout << "3) Hug the bear\n";
            std::cout << "4) Run away\n";
            std::cout << "\n";
            int anwser2D;
            std::cin >> anwser2D;
        }


        while (anwser2D == 4) {
            std::cout << "\n";
            std::cout << "The bear chased after you and ate you!\n";
            std::cout << "\n";
            std::cout << "choose again but wisely\n";
            std::cout << "\n";
            std::cin >> anwser2D;
        }
        while (anwser2D == 2) {
            std::cout << "\n";
            std::cout << "The axe barely reached the bear and the bear ate you!\n";
            std::cout << "\n";
            std::cout << "choose again but wisely\n";
            std::cout << "\n";
            std::cin >> anwser2D;
        }
        if (anwser2D == 1) {
            std::cout << "\n";
            std::cout << "You killed the bear\n";
            std::cout << "\n";
        }
        if (anwser2D == 3) {
            std::cout << "\n";
            std::cout << "The bear was misunderstood and just wanted to give you hug as well, the bear carried on peacefully\n";
            std::cout << "\n";
        }
        int anwser3D;
        std::cout << "You finnaly made it to the top of the mountain where you have to fight against 100 skeletons\n";
        std::cout << "1) Go Braveheart!\n";
        std::cout << "2) Just give up there is no hope\n";
        std::cout << "3) Spin like a top and plow through the 100 skellies\n";
        std::cin >> anwser3D;

        while (anwser3D == 2) {
            std::cout << "\n";
            std::cout << "The skeletons surrounded you and you died\n";
            std::cout << "\n";
            std::cout << "Try again and choose wisely\n";
            std::cin >> anwser3D;
        }
        if (anwser3D == 1) {
            std::cout << "\n";
            std::cout << "Your tretrous task paid off and you slain all 100 skeletons\n";
            std::cout << "\n";
            std::cout << "You hero once again!";
        }
        else if (anwser3D == 3) {
            std::cout << "\n";
            std::cout << "The skeletons got absloutely shredded\n";
            std::cout << "\n";
            std::cout << "You hero once again!";


        }
        break;


    }

    system("pause>0");

}































