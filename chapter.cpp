#include "chapter.h"

chapter::chapter()
{/*
    for(int i = 0; i < TOTAL_PAGES;i++)
    {
        for(int j = 0; j < TOTAL_SCRIPTS;j++)
        {
            scriptString[i][j].str("");
        }
    }*/
    //chapter 1, page 1
	scriptString[0][0].str( "5 years ago, I stopped working regular jobs." );
	scriptString[0][1].str("Since then I've mostly begged for money on the street corner");
	scriptString[0][2].str("with cardboard signs that say things like 'Anything Helps'.");
    scriptString[0][3].str("I stopped working because I noticed a few major problems with");
    scriptString[0][4].str("our socio-economic system.  self-driving cars were commercially viable,");
    scriptString[0][5].str("but the state of California red-taped self driving cars. It made sense");
    scriptString[0][6].str("why... it would greatly affect the need for labor in the workforce.");
    scriptString[0][7].str("                                Press LMB or Enter to continue...");
//chapter 1, page 2
    scriptString[1][0].str("If the car is driving, the person behind the wheel [but why tf");
    scriptString[1][1].str("would there be a wheel?] can't be held liable, which makes the car driving");
    scriptString[1][2].str("system responsible, but their cars drive better than humans, so that");
    scriptString[1][3].str("won't be much of a problem.  They would probably insure their own");
    scriptString[1][4].str("cars, which would reduce auto insurance agents.  Besides that, ");
    scriptString[1][5].str("it's hard to find probable cause when the car is driving, which");
    scriptString[1][6].str("reduces the need for police on the streets.");
    scriptString[1][7].str("                                Press LMB or Enter to continue...");
//chapter 1, page 3
    scriptString[2][0].str("when self-driving cars are freely allowed, the need for cars drops.");
    scriptString[2][1].str("One car can be used by an entire family by summoning it as needed");
    scriptString[2][2].str("when not in active use.  But mainly, drivers would lose jobs, taxi");
    scriptString[2][3].str("drivers, gig-economy transportation drivers, and big-rig truckers.");
    scriptString[2][4].str("Self-driving cars would require a black box like airplanes for liability");
    scriptString[2][5].str("as well as bug fixes.  The goal is 100% safety on the road. 30,000");
    scriptString[2][6].str("automobile deaths yearly would be greatly reduced by self driving cars.");
    scriptString[2][7].str("                                Press LMB or Enter to continue...");

//chapter 1, page 4
    scriptString[3][0].str("The only problem with changing over to large scale automation in areas");
    scriptString[3][1].str("like driving is the job problem.  The only way to deal with a job market");
    scriptString[3][2].str("that is smaller than the labor force is to implement Universal Basic Income.");
    scriptString[3][3].str("Universal Basic Income is the idea that everyone, no matter their employment");
    scriptString[3][4].str("status receives a certain amount of money.  debtors can not garnish it, and");
    scriptString[3][5].str("you still receive it if you are working...  ");
    scriptString[3][6].str("My mission is Universal basic income.");
    scriptString[3][7].str("                                Press LMB or Enter to continue...");

//chapter 1, page 5
    scriptString[4][0].str("You may be asking yourself: Won't people lose the incentive ");
    scriptString[4][1].str("to work if they receive UBI?  and yes, they will.  Millions of");
    scriptString[4][2].str("Americans are working minimum wage jobs that don't provide a ");
    scriptString[4][3].str("living wage.  The companies that provide these jobs fight against");
    scriptString[4][4].str("worker's rights, because nothing is more important to them than");
    scriptString[4][5].str("the bottom line.  In my last job I was working in a call center for");
    scriptString[4][6].str("a big telecom company.  bedbugs and mandatory overtime for all.");
    scriptString[4][7].str("                                Press LMB or Enter to continue...");
//chapter 1, page 6
    scriptString[5][0].str("Since that job I've worked for myself mostly. Besides begging on");
    scriptString[5][1].str("street corners, I have knitted several scarves although I never made");
    scriptString[5][2].str("any money on them, only gave them away, except one that a friend");
    scriptString[5][3].str("tried on and walked off with... sigh.  I've painted a lot of paintings");
    scriptString[5][4].str("and sold a few of them.  acrylic + canvas.  I'm an avid gamer and");
    scriptString[5][5].str("since I'm basically retired, I play a lot of pc/android games.");
    scriptString[5][6].str("I have a bachelor's degree in computer science, so I'm programming this.");
    scriptString[5][7].str("                                Press LMB or Enter to continue...");

    scriptString[6][0].str("If universal basic income is instated, the ultra rich know that");
    scriptString[6][1].str("eventually we will move toward income equality across the planet.");
    scriptString[6][2].str("That means people will be doing what they want to instead of what");
    scriptString[6][3].str("they must.  Since my last job I've been doing my part in keeping");
    scriptString[6][4].str("the demand for labor up by not working.  I want a future where");
    scriptString[6][5].str("employers don't low-ball new employees on wages, and perhaps we");
    scriptString[6][6].str("can return to a time where employers search for employees.");
    scriptString[6][7].str("                                Press LMB or Enter to continue...");

    scriptString[7][0].str("I grew up playing PC and console videogames.  I knew I wanted");
    scriptString[7][1].str("to make videogames.  It's why I got into computer science.");
    scriptString[7][2].str("unfortunately the market for game developers is too competitive,");
    scriptString[7][3].str("so I'm making this game independently in my spare time, with zero");
    scriptString[7][4].str("budget. The jobs in the computer science field are cut-throat and");
    scriptString[7][5].str("don't actually pay as much as I thought they would. I'm done making");
    scriptString[7][6].str("online surveys for market research.");
    scriptString[7][7].str(" *End of Chapter 1* Press LMB or Enter to return to select screen.");

}

chapter::~chapter()
{
    for(int i = 0; i < TOTAL_PAGES;i++)
    {
        for(int j = 0; j < TOTAL_SCRIPTS;j++)
        {
            //scriptString[i][j].free();
        }
    }
}

bool loadStrings()
{
    //Loading success flag
	bool success = true;



	//scriptTexture[0].scriptString="5 years ago, I stopped working regular jobs.";
	//scriptTexture[1].scriptString="Since then I've mostly begged for money on the street corner with cardboard signs that say things like 'Anything Helps'.";
    //std::cout << "button name: " << gButtons[0].buttonName;

    return success;

}
