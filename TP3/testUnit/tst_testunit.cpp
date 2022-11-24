#include <QtTest>
#include "../WarOfRobot/Game.h"
#include "../WarOfRobot/Player.h"
#include "../WarOfRobot/StrongState.h"
#include "../WarOfRobot/GoodState.h"
#include "../WarOfRobot/AverageState.h"
#include "../WarOfRobot/WeakState.h"
#include "../WarOfRobot/DieState.h"

// add necessary includes here

class testUnit : public QObject
{
    Q_OBJECT

public:
    testUnit();
    ~testUnit();

private slots:

    //Test de Game
    void testGamePlayerExist();

    //Tests de Player
    void testPlayerAttack();
    void testPlayerDefend();
    void testPlayerPlayerAlive();
    void testPlayerGetUsername();
    void testPlayerGetLifePoint();

    //Tests de Player en "Strong state (80-100)"
    void testStrongAttack();
    void testStrongDefend();

    //Tests de Player en "Good state (50-79)"
    void testGoodAttack();
    void testGoodDefend();

    //Tests de Player en "Average state (30-49)"
    void testAverageAttack();
    void testAverageDefend();

    //Tests de Player en "Weak state (1-29)"
    void testWeakAttack();
    void testWeakDefend();
};

    void testUnit::testGamePlayerExist()
    {
        Game *aGame = new Game();
        Player *aPlayer = new Player("username");
        aGame->addPlayer(aPlayer);
        QCOMPARE(aGame->playerExist("username"), true);
    }

    void testUnit::testPlayerAttack()
    {
        Player *aPlayer = new Player("username");
        QCOMPARE(aPlayer->attack(10), 15);
    }

    void testUnit::testPlayerDefend()
    {
        Player *aPlayer = new Player("username");
        QCOMPARE(aPlayer->defend(10), 15);
    }

    void testUnit::testPlayerPlayerAlive()
    {
        Player *aPlayer = new Player("username");
        QCOMPARE(aPlayer->playerAlive(), true);
    }

    void testUnit::testPlayerGetUsername()
    {
        Player *aPlayer = new Player("username");
        QCOMPARE(aPlayer->getUsername(), "username");
    }

    void testUnit::testPlayerGetLifePoint()
    {
        Player *aPlayer = new Player("username");
        QCOMPARE(aPlayer->getLifePoint(), 100);
    }

    void testUnit::testStrongAttack()
    {
        Player *aPlayer = new Player("username");
        StrongState *strong = new StrongState(aPlayer);
        QCOMPARE(strong->attack(10), 15);
    }

    void testUnit::testStrongDefend()
    {
        Player *aPlayer = new Player("username");
        StrongState *strong = new StrongState(aPlayer);
        QCOMPARE(strong->defend(10), 7);
    }

    void testUnit::testGoodAttack()
    {
        Player *aPlayer = new Player("username");
        GoodState *good = new GoodState(aPlayer);
        QCOMPARE(good->attack(10), 10);
    }

    void testUnit::testGoodDefend()
    {
        Player *aPlayer = new Player("username");
        GoodState *good = new GoodState(aPlayer);
        QCOMPARE(good->defend(10), 10);
    }

    void testUnit::testAverageAttack()
    {
        Player *aPlayer = new Player("username");
        AverageState *average = new AverageState(aPlayer);
        QCOMPARE(average->attack(10), 10);
    }

    void testUnit::testAverageDefend()
    {
        Player *aPlayer = new Player("username");
        AverageState *average = new AverageState(aPlayer);
        QCOMPARE(average->defend(10), 10);
    }

    void testUnit::testWeakAttack()
    {
        Player *aPlayer = new Player("username");
        WeakState *weak = new WeakState(aPlayer);
        QCOMPARE(weak->attack(10), 10);
    }

    void testUnit::testWeakDefend()
    {
        Player *aPlayer = new Player("username");
        WeakState *weak = new WeakState(aPlayer);
        QCOMPARE(weak->defend(10), 15);
    }

QTEST_APPLESS_MAIN(testUnit)

#include "tst_testunit.moc"
