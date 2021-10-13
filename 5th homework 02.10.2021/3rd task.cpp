#include <iostream>

class Server {
	private:
		void ban_player(std::size_t user_id);
		void check_user_rating(std::size_t user_id);
		friend class Access;
};


class Access {
	private:
		static void check_user_rating(Server& server, std::size_t user_id) {
			server.check_user_rating(user_id);
		}
		friend class Player;
};


class Player {
	/*
	* Player has access to Server::check_user_rating, but not to Server::ban_player
	*/
};