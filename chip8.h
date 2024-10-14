class chip8
{
	public:
		chip8();
		~chip8();

		bool drawFlag;
		
		void emulateCycle();
		void debugRender();
		bool loadApplication(const char* filename);

		unsigned char gfx[64 * 32];
		unsigned char key[16];

	private:
		unsigned short pc;		//program counter
		unsigned short opcode;	//current opcode
		unsigned short I;		//index register
		unsigned short sp;		//stack pointer

		unsigned char V[16];
		unsigned short stack[16];
		unsigned char memory[4096];	//memori ram 4k

		unsigned char delay_timer;
		unsigned char sound_timer;

		void init();

};
