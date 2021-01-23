namespace NuKe{

    void Player::eat(int val){
        score += val;
    }
    Player::Player(int y,int x,Game* ingame){
        p_y = y;
        p_x = x;
        this->ingame = ingame;
    }
    bool Player::ismovable(int y,int x){
        int state = this->ingame->getstate(y,x);
        int retn = 1;
        if(this->ingame->getpattern(state) == 1){
            retn = 0;
        }
        return retn;
    }
    bool Player::isapple(int y,int x){
        int state = this->ingame->getstate(y,x);
        int retn = 0;
        if(this->ingame->getpattern(state) == 3){
            retn = 1;
        }
        return retn;
    }
    void Player::move(int y,int x){
        if(this->ismovable(y,x)){
            if(this->isapple(y,x)){
                this->eat(1);
            }
            this->ingame->setstate(p_y,p_x,0);
            this->ingame->setstate(y,x,2);
        }
    }
}