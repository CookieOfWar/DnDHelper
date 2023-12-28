#include "CharacterSheet.h"
#include <fstream>

using namespace std;

System::Void DnDHelper::CharacterSheet::downloadButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	int deathGood = 0;
	int deathBad = 0;
	

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		StreamReader^ rd = gcnew StreamReader(openFileDialog1->FileName);
		NameBox->Text = rd->ReadLine();
		RaceCB->SelectedIndex = System::Convert::ToInt32(rd->ReadLine());
		ClassCB->SelectedIndex = System::Convert::ToInt32(rd->ReadLine());
		LevelUpDown->Value = System::Convert::ToInt32(rd->ReadLine());
		inspiration = !System::Convert::ToBoolean(rd->ReadLine());
		button1_Click(this, e);
		StrenghtUpDown->Value = System::Convert::ToInt32(rd->ReadLine());
		LovkostUpDown->Value = System::Convert::ToInt32(rd->ReadLine());
		teloslUpDown->Value = System::Convert::ToInt32(rd->ReadLine());
		intelUpDown->Value = System::Convert::ToInt32(rd->ReadLine());
		wisdomUpDown->Value = System::Convert::ToInt32(rd->ReadLine());
		charismaUpDown->Value = System::Convert::ToInt32(rd->ReadLine());
		MaxHP->Text = rd->ReadLine();
		CurrentHP->Text = rd->ReadLine();
		TempHP->Text = rd->ReadLine();
		ArmorC->Text = rd->ReadLine();
		Initiative->Text = rd->ReadLine();

		for (int i = 0; i < 3; ++i) {
			dG1->Checked = false;
			dG2->Checked = false;
			dG3->Checked = false;
			dB1->Checked = false;
			dB2->Checked = false;
			dB3->Checked = false;
		}
		deathGood = System::Convert::ToInt32(rd->ReadLine());
		deathBad = System::Convert::ToInt32(rd->ReadLine());
		if (deathGood > 0) {
			dG1->Checked = true;
			if (deathGood > 1) {
				dG2->Checked = true;
				if (deathGood > 2)
					dG3->Checked = true;
			}
		}
		if (deathBad > 0) {
			dB1->Checked = true;
			if (deathBad > 1) {
				dB2->Checked = true;
				if (deathBad > 2)
					dB3->Checked = true;
			}
		}

		Athl->Checked = System::Convert::ToBoolean(rd->ReadLine());
		Akr->Checked = System::Convert::ToBoolean(rd->ReadLine());
		HandDex->Checked = System::Convert::ToBoolean(rd->ReadLine());
		Stealth->Checked = System::Convert::ToBoolean(rd->ReadLine());
		Analisys->Checked = System::Convert::ToBoolean(rd->ReadLine());
		History->Checked = System::Convert::ToBoolean(rd->ReadLine());
		Magic->Checked = System::Convert::ToBoolean(rd->ReadLine());
		Nature->Checked = System::Convert::ToBoolean(rd->ReadLine());
		Religic->Checked = System::Convert::ToBoolean(rd->ReadLine());
		Attent->Checked = System::Convert::ToBoolean(rd->ReadLine());
		Surviv->Checked = System::Convert::ToBoolean(rd->ReadLine());
		Medic->Checked = System::Convert::ToBoolean(rd->ReadLine());
		Pronic->Checked = System::Convert::ToBoolean(rd->ReadLine());
		AnimCare->Checked = System::Convert::ToBoolean(rd->ReadLine());
		vistup->Checked = System::Convert::ToBoolean(rd->ReadLine());
		zapug->Checked = System::Convert::ToBoolean(rd->ReadLine());
		lie->Checked = System::Convert::ToBoolean(rd->ReadLine());
		ubejd->Checked = System::Convert::ToBoolean(rd->ReadLine());

		copperC->Text = rd->ReadLine();
		silverC->Text = rd->ReadLine();
		goldC->Text = rd->ReadLine();
		platinumC->Text = rd->ReadLine();
		Notes->Text = rd->ReadToEnd();
	}
	return System::Void();
}

System::Void DnDHelper::CharacterSheet::uploadButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	int deathGood = 0;
	int deathBad = 0;
	bool G[3] = { dG1->Checked, dG2->Checked, dG3->Checked };
	bool B[3] = { dB1->Checked, dB2->Checked, dB3->Checked };
	bool strdop = Athl->Checked;
	bool dexdop[3] = { Akr->Checked, HandDex->Checked, Stealth->Checked };
	bool inteldop[5] = { Analisys->Checked, History->Checked, Magic->Checked, Nature->Checked, Religic->Checked };
	bool wisddop[5] = { Attent->Checked, Surviv->Checked, Medic->Checked, Pronic->Checked, AnimCare->Checked };
	bool chardop[4] = { vistup->Checked, zapug->Checked, lie->Checked, ubejd->Checked };


	for (int i = 0; i < 3; ++i) {
		if (G[i])
			deathGood++;
	}
	for (int i = 0; i < 3; ++i) {
		if (B[i])
			deathBad++;
	}


	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		StreamWriter^ wr = gcnew StreamWriter(saveFileDialog1->FileName);
		wr->WriteLine(NameBox->Text);
		wr->WriteLine(RaceCB->SelectedIndex);
		wr->WriteLine(ClassCB->SelectedIndex);
		wr->WriteLine(LevelUpDown->Value.ToString());
		wr->WriteLine(inspiration);
		wr->WriteLine(StrenghtUpDown->Value);
		wr->WriteLine(LovkostUpDown->Value);
		wr->WriteLine(teloslUpDown->Value);
		wr->WriteLine(intelUpDown->Value);
		wr->WriteLine(wisdomUpDown->Value);
		wr->WriteLine(charismaUpDown->Value);
		wr->WriteLine(MaxHP->Text);
		wr->WriteLine(CurrentHP->Text);
		wr->WriteLine(TempHP->Text);
		wr->WriteLine(ArmorC->Text);
		wr->WriteLine(Initiative->Text);
		wr->WriteLine(deathGood);
		wr->WriteLine(deathBad);
		wr->WriteLine(strdop);
		for (int i = 0; i < 3; ++i) {
			wr->WriteLine(dexdop[i]);
		}
		for (int i = 0; i < 5; ++i) {
			wr->WriteLine(inteldop[i]);
		}
		for (int i = 0; i < 5; ++i) {
			wr->WriteLine(wisddop[i]);
		}
		for (int i = 0; i < 4; ++i) {
			wr->WriteLine(chardop[i]);
		}
		wr->WriteLine(copperC->Text);
		wr->WriteLine(silverC->Text);
		wr->WriteLine(goldC->Text);
		wr->WriteLine(platinumC->Text);
		wr->Write(Notes->Text);
		wr->Close();
	}
	return System::Void();
}
