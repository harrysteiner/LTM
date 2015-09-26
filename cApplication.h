/* 
 * File:   cApplication.h
 * Author: juia
 *
 * Created on 19. September 2015, 14:30
 */

#ifndef CAPPLICATION_H
#define	CAPPLICATION_H

#include "cHelper.h"
#include "boost/program_options/variables_map.hpp"
#include "boost/program_options/options_description.hpp"
#include "boost/program_options/parsers.hpp"
#include "boost/program_options/cmdline.hpp"

namespace po = boost::program_options;

#define HELP "help"
#define COURTS "courts" //amount of courts to play on
#define TTP "ttp" //timt to play
#define TFG "tfg" //Time for one single game
#define TEAM1 "team1" //amount of gamers in team 1
#define TEAM2 "team2" //amout of gamers in team 2


class cApplication
{
public:
  cApplication(int argc, char** argv);
  cApplication(const cApplication& orig);
  virtual ~cApplication();
  
  int GetPlayerTeam1(){return m_iPlayerTeam1;}
  int GetPlayerTeam2(){return m_iPlayerTeam2;}
  int GetTimeToPlay(){return m_dTimeToPlayH;}
  int GetTimeForOneGame(){return m_dTimeForOneGameMin;}
  int GetCountOfGames(){return m_iCountOfGames;}
  int GetCountOfCourts() {return m_iCountOfCourts;}

private:
  po::variables_map m_oVarMap;
  
  /** Zahl der Spieler*/
  int m_iPlayerTeam1;
  int m_iPlayerTeam2;
  
  /** Zeit fur das Turnier in Stunden
   */
  double m_dTimeToPlayH;
  
  /** Zeit fuer ein einziges Spiel
   */
  double m_dTimeForOneGameMin;
  
  /** Zahl der möglichen Spiele
   */
  int m_iCountOfGames;
  
  /** Zahl bespielbaren Plätze
   */
  int m_iCountOfCourts;

};

#endif	/* CAPPLICATION_H */

