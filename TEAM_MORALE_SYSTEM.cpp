#ifndef TEAM_MORALE_SYSTEM_H
#define TEAM_MORALE_SYSTEM_H

#include <string>
#include <vector>

class Player {
private:
    std::string name;
    std::string position;
    int overallRating;
    int morale;
    int chemistry;
    std::vector<int> stats;

public:
    Player(std::string name, std::string position, int rating);
    void updateMorale(int change);
    void adjustChemistry(int change);
    void increaseStats(int statIndex, int value);
    int getMorale() const;
    int getChemistry() const;
};

class Team {
private:
    std::string name;
    std::vector<Player> roster;
    int teamMorale;
    int chemistryScore;

public:
    Team(std::string name);
    void calculateChemistry();
    void adjustMorale(int change);
    void updateRoster(Player newPlayer);
    int getTeamMorale() const;
};

class Coach {
private:
    std::string name;
    std::string strategy;
    int motivationSkill;
    int reputation;

public:
    Coach(std::string name, std::string strategy, int motivation);
    void giveSpeech();
    void adjustPlaystyle(std::string newStrategy);
    void manageRoster(Team& team);
};

class Media {
private:
    std::vector<std::string> newsHeadlines;

public:
    void generateNews(std::string headline);
    void influenceMorale(Player& player, int change);
};

class Fanbase {
private:
    int loyalty;
    int happinessLevel;

public:
    Fanbase(int loyalty);
    void reactToPerformance(int teamPerformance);
    void influenceMorale(Team& team, int change);
};

class MatchPerformance {
public:
    void evaluatePerformance(Team& team);
    void updateChemistry(Team& team);
};

#endif // TEAM_MORALE_SYSTEM_H
