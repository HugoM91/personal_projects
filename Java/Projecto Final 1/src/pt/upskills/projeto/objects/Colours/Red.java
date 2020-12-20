package pt.upskills.projeto.objects.Colours;

import pt.upskills.projeto.gui.ImageTile;
import pt.upskills.projeto.rogue.utils.Position;

public class Red implements ImageTile {


	Position position;

	public Red( Position position) {
		this.position = position;
	}

	@Override
	public String getName() {
		return "Red";
	}



	@Override
	public Position getPosition() {
		return position;
	}

}
