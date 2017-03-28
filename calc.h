#include <cmath>
class Elo{
	public:
		Elo(int k);
		void set(int ra, int rb, double sa);
		int get();
	private:
		int K,RA,RB;
		double EA,SA;
};
